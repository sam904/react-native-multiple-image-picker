import { ColorValue } from 'react-native'
import { Result } from './result'

export type SelectBoxStyle = 'number' | 'tick'

export type SelectMode = 'single' | 'multiple'

export type MediaType = 'video' | 'image' | 'all'

export type Theme = 'light' | 'dark'

export type Presentation = 'fullScreenModal' | 'formSheet'

export type Language =
  | 'system' // Use system language 🌐
  | 'zh-Hans' // Simplified Chinese 🇨🇳
  | 'zh-Hant' // Traditional Chinese 🇹🇼
  | 'ja' // Japanese 🇯🇵
  | 'ko' // Korean 🇰🇷
  | 'en' // English 🇺🇸
  | 'th' // Thai 🇹🇭 (iOS only)
  | 'id' // Indonesian 🇮🇩 (iOS only)
  | 'vi' // Vietnamese 🇻🇳
  | 'ru' // Russian 🇷🇺
  | 'de' // German 🇩🇪
  | 'fr' // French 🇫🇷
  | 'ar' // Arabic 🇸🇦

export type PickerCropConfig = {
  circle?: boolean
}

export interface Text {
  finish?: string
  original?: string
  preview?: string
  edit?: string
}

export interface NitroConfig {
  mediaType: MediaType

  selectedAssets: Result[]

  selectBoxStyle: SelectBoxStyle

  selectMode: SelectMode

  numberOfColumn?: number

  isPreview?: boolean

  primaryColor?: number

  allowedCamera?: boolean

  allowSwipeToSelect?: boolean

  spacing?: number

  isHiddenPreviewButton?: boolean

  isHiddenOriginalButton?: boolean

  isShowPreviewList?: boolean

  allowHapticTouchPreview?: boolean

  isShowAssetNumber?: boolean

  allowedLimit?: boolean

  maxVideo?: number

  maxSelect?: number

  maxVideoDuration?: number

  minVideoDuration?: number

  maxFileSize?: number

  videoQuality?: number

  imageQuality?: number

  backgroundDark?: number

  presentation: Presentation

  crop?: PickerCropConfig

  text?: Text

  language: Language

  theme?: Theme
}

export interface Config
  extends Omit<
    NitroConfig,
    | 'selectedAssets'
    | 'mediaType'
    | 'selectMode'
    | 'selectBoxStyle'
    | 'primaryColor'
    | 'presentation'
    | 'language'
    | 'theme'
    | 'backgroundDark'
  > {
  mediaType?: MediaType
  selectedAssets?: Result[]
  selectBoxStyle?: SelectBoxStyle
  selectMode?: SelectMode
  primaryColor?: ColorValue
  presentation?: Presentation
  language?: Language
  theme?: Theme | 'system'
  backgroundDark?: ColorValue
}
